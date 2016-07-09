//
//  UIImage+CZ.h
//  01-UIPopoverController
//
//  Created by 刘超 on 15/7/13.
//  Copyright (c) 2015年 itcast.cn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ZC)

/**
 *  获得某个像素的颜色
 *
 *  @param point 像素点的位置
 */
- (UIColor *)pixelColorAtLocation:(CGPoint)point;
@end
