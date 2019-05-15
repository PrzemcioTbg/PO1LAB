#ifndef H_COORDINATE_
#define H_COORDINATE_

#include <iostream> 
#include <cmath> 

////////////////////////////////////////////////////////////////////////
//
// distance between latitudes and longitudes  
double Haversine(double lon1, double lat1, double lon2, double lat2);

////////////////////////////////////////////////////////////////////////
//
class PointedDistance {
  private:
    float m_distance;        // in [m]
    std::string m_direction; // South, North, East, West
  public:
    PointedDistance() = default;
    PointedDistance(float distance, std::string direction)
      : m_distance(distance),m_direction(direction){}
    ~PointedDistance() = default;  
    float Value() const {return m_distance;}
    std::string Direction() const {return m_direction;}
};

////////////////////////////////////////////////////////////////////////
//
class Coordinate {
  friend std::ostream & operator<<(std::ostream &ekran, const Coordinate &object);
  protected:
    float m_longitude;
    float m_latitude;
  public:
    Coordinate() = default;   
    Coordinate(float longitude, float latitude)
      : m_longitude(longitude), m_latitude(latitude){}
    Coordinate(const Coordinate& coord){
        m_longitude = coord.Longitude();
        m_latitude = coord.Latitude();
    }  
    ~Coordinate() = default;

    float Latitude()const{return m_latitude;}
    float Longitude()const{return m_longitude;}
    void Latitude(float var){ m_latitude = var;}
    void Longitude(float var){ m_longitude = var;}

    void MoveInDirection(double xx_dinstance, std::string direction);

    Coordinate operator +=(PointedDistance dist){
      MoveInDirection(dist.Value(), dist.Direction());
      return *this;
    }


};



#endif // H_COORDINATE_