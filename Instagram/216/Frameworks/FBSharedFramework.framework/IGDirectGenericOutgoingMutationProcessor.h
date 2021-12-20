//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMutationRequestProcessing-Protocol.h>

@class IGDirectMutationNetworker, IGDirectMutationNetworkerDataProvider, NSString;

@interface IGDirectGenericOutgoingMutationProcessor : NSObject <IGDirectMutationRequestProcessing>
{
    IGDirectMutationNetworker *_networker;
    IGDirectMutationNetworkerDataProvider *_dataProvider;
}

- (void).cxx_destruct;
- (void)handleMutationStateChange:(id)arg1;
- (void)executeWithResultHandler:(id)arg1 accessoryPackage:(id)arg2;
- (id)initWithNetworker:(id)arg1 dataProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

