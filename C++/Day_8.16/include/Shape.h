#ifndef SHAPE_H_
#define SHAPE_H_

namespace NShape
{
class Shape
	{
	protected:
		float area;
	public:
		Shape( void ) throw( );

		virtual void calculateArea( void ) throw( ) = 0 ;

		float getArea() const throw( );

		virtual ~Shape( void ) throw( );
	};
}

#endif /* SHAPE_H_ */
