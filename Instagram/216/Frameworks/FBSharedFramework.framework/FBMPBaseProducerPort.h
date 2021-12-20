//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMPProducerPort-Protocol.h>

@class NSString;
@protocol FBMPInput;

@interface FBMPBaseProducerPort : NSObject <FBMPProducerPort>
{
    Class _type;
    _Bool _stopsPerfTracking;
    CDUnknownBlockType _produceBlock;
    id <FBMPInput> _input;
}

+ (id)newWithDataType:(Class)arg1 stopsPerfTracking:(_Bool)arg2 input:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool stopsPerfTracking; // @synthesize stopsPerfTracking=_stopsPerfTracking;
@property(nonatomic) __weak id <FBMPInput> input; // @synthesize input=_input;
@property(copy) CDUnknownBlockType produceBlock; // @synthesize produceBlock=_produceBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (Class)producerPortDataType;
- (id)initWithDataType:(Class)arg1 stopsPerfTracking:(_Bool)arg2 input:(id)arg3;
- (id)initWithDataType:(Class)arg1 stopsPerfTracking:(_Bool)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
