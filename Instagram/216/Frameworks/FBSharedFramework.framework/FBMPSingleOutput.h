//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMPOutput-Protocol.h>

@class FBMPBaseConsumerPort, NSString;

@interface FBMPSingleOutput : NSObject <FBMPOutput>
{
    FBMPBaseConsumerPort *_port;
}

- (void).cxx_destruct;
- (id)consumerPorts;
- (void)consume:(id)arg1 metadata:(struct FBMPDataMetadata)arg2;
- (id)initWithDataType:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

