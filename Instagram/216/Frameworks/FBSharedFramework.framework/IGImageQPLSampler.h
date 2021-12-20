//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGImageQPLSampling-Protocol.h>

@class NSString;

@interface IGImageQPLSampler : NSObject <IGImageQPLSampling>
{
    long long _randomSampleValue;
    long long _sampleRate;
    long long _fetchedSamplingRate;
}

- (long long)fetchedSamplingRate;
- (long long)sampleRate;
- (_Bool)shouldSampleImageWithUrl:(id)arg1;
- (id)initWithSampleRate:(long long)arg1 fetchedSamplingRate:(long long)arg2 shouldChooseRandomMod:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
