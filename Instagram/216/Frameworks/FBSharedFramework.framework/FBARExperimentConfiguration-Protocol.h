//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString;

@protocol FBARExperimentConfiguration <NSObject>
- (double)doubleForParameter:(int)arg1 withDefault:(double)arg2;
- (NSString *)stringForParameter:(int)arg1 withDefault:(NSString *)arg2;
- (long long)int64ForParameter:(int)arg1 withDefault:(long long)arg2;
- (_Bool)boolWithoutLoggingForParameter:(int)arg1 withDefault:(_Bool)arg2;
- (_Bool)boolForParameter:(int)arg1 withDefault:(_Bool)arg2;
@end

