//
//  MXPageControl.h
//  MXScrollViewDemo
//
//  Created by apple on 16/3/24.
//  Copyright © 2016年 PRO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MXScrollHeader.h"

@interface MXPageControl : UIPageControl

- (instancetype)initWithFrame:(CGRect)frame
              superViewHeight:(CGFloat)superViewHeight;

- (void)setPosition:(kMXPageControlPosition)pisition;

@end
