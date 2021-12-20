//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMPData-Protocol.h>

@class NSDictionary, NSString;

@interface FBMPPlatformAlgorithmData : NSObject <FBMPData>
{
    double _timestamp;
    NSDictionary *_dataMap;
}

+ (id)newWithTimestamp:(double)arg1 dataMap:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *dataMap; // @synthesize dataMap=_dataMap;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithTimestamp:(double)arg1 dataMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

