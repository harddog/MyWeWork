//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (QMUI)
+ (id)qmui_imageWithView:(id)arg1 afterScreenUpdates:(_Bool)arg2;
+ (id)qmui_imageWithView:(id)arg1;
+ (id)qmui_imageWithAttributedString:(id)arg1;
+ (id)qmui_imageWithShape:(long long)arg1 size:(struct CGSize)arg2 tintColor:(id)arg3;
+ (id)qmui_imageWithShape:(long long)arg1 size:(struct CGSize)arg2 lineWidth:(double)arg3 tintColor:(id)arg4;
+ (id)qmui_imageWithColor:(id)arg1 size:(struct CGSize)arg2 cornerRadiusArray:(id)arg3;
+ (id)qmui_imageWithColor:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3;
+ (id)qmui_imageWithColor:(id)arg1;
+ (id)qmui_imageWithStrokeColor:(id)arg1 size:(struct CGSize)arg2 lineWidth:(double)arg3 borderPosition:(long long)arg4;
+ (id)qmui_imageWithStrokeColor:(id)arg1 size:(struct CGSize)arg2 lineWidth:(double)arg3 cornerRadius:(double)arg4;
+ (id)qmui_imageWithStrokeColor:(id)arg1 size:(struct CGSize)arg2 path:(id)arg3 addClip:(_Bool)arg4;
+ (void)load;
- (id)qmui_imageWithMaskImage:(id)arg1 usingMaskImageMode:(_Bool)arg2;
- (id)qmui_imageWithBorderColor:(id)arg1 borderWidth:(double)arg2 borderPosition:(long long)arg3;
- (id)qmui_imageWithBorderColor:(id)arg1 borderWidth:(double)arg2 cornerRadius:(double)arg3 dashedLengths:(const double *)arg4;
- (id)qmui_imageWithBorderColor:(id)arg1 borderWidth:(double)arg2 cornerRadius:(double)arg3;
- (id)qmui_imageWithBorderColor:(id)arg1 path:(id)arg2;
- (id)qmui_imageWithOrientation:(long long)arg1;
- (id)qmui_imageWithScaleToSize:(struct CGSize)arg1 contentMode:(long long)arg2 scale:(double)arg3;
- (id)qmui_imageWithScaleToSize:(struct CGSize)arg1 contentMode:(long long)arg2;
- (id)qmui_imageWithScaleToSize:(struct CGSize)arg1;
- (id)qmui_imageWithClippedRect:(struct CGRect)arg1;
- (id)qmui_imageWithSpacingExtensionInsets:(struct UIEdgeInsets)arg1;
- (id)qmui_imageWithImageAbove:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)qmui_imageWithTintColor:(id)arg1;
- (_Bool)qmui_opaque;
- (id)qmui_imageWithAlpha:(double)arg1;
- (id)qmui_grayImage;
- (id)qmui_averageColor;
- (id)qmui_description;
@end
