//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBMPVideoEditsFilterConfig;

@interface FBTimedFilterEdits : NSObject
{
    FBMPVideoEditsFilterConfig *_config;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) FBMPVideoEditsFilterConfig *config; // @synthesize config=_config;
- (id)initWithVideoEditsFilterConfig:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

@end
