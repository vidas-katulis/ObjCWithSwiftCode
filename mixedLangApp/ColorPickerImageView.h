//
//  ColorPickerImageView.h
//  ColorPicker
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



@class ViewController;

@interface ColorPickerImageView : UIImageView
{
	UIColor* lastColor;
	id pickedColorDelegate;
   // ViewController *viewObj;
    
    int red;
    int green;
    int blue;
    
}

@property (nonatomic, retain) UIColor* lastColor;
@property (nonatomic, retain) id pickedColorDelegate;
@property (nonatomic,retain) ViewController *viewObj;

//------for returning values to swift class---------//
//-(ViewController *)returnSwiftObjet:(UIColor *)color;

- (UIColor*) getPixelColorAtLocation:(CGPoint)point;
- (CGContextRef) createARGBBitmapContextFromImage:(CGImageRef)inImage;

@end
