//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol IGTVChannelDataSourceType;

@protocol IGTVChannelDataSourceListener <NSObject>
- (void)channelDataSourceDidUpdate:(id <IGTVChannelDataSourceType>)arg1 fromAction:(long long)arg2 error:(NSError *)arg3;
- (void)channelDataSourceWillUpdate:(id <IGTVChannelDataSourceType>)arg1;
@end

