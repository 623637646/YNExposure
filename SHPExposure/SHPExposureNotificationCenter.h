//
//  SHPExposureNotificationCenter.h
//  SHPExposure
//
//  Created by Wang Ya on 31/10/18.
//  Copyright © 2018 Shopee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHPExposureMacro.h"

NS_ASSUME_NONNULL_BEGIN

@interface SHPExposureNotificationCenter : NSNotificationCenter
MACRO_SINGLETON_PATTERN_H

@property (class, readonly, strong) NSNotificationCenter *defaultCenter NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
