//
//  MPLogger.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the MoPub SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import <Foundation/Foundation.h>
#import "MPLogLevel.h"

/**
 Objects which are capable of consuming log messages.
 */
@protocol MPLogger <NSObject>

/**
 Current logging level.
 */
@property (nonatomic, readonly) MPLogLevel logLevel;

/**
 Message to be logged.
 @param message Message to be logged.
 */
- (void)logMessage:(NSString * _Nullable)message;

@end
