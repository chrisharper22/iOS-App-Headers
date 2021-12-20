//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSignalEmitDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol IGScheduler, IGSignalsModelDelegate, IGSignalsObjectType;

@interface IGSignalsModel : NSObject <IGSignalEmitDelegate>
{
    NSMutableArray *_pendingSignals;
    NSMutableDictionary *_pendingSignalsValues;
    id <IGScheduler> _queueScheduler;
    NSString *_identifier;
    id <IGSignalsModelDelegate> _modelDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSignalsModelDelegate> modelDelegate; // @synthesize modelDelegate=_modelDelegate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)didReceiveEmitFromSignal:(id)arg1 value:(id)arg2;
- (id)valueForSignal:(id)arg1;
- (void)requestPrediction:(CDUnknownBlockType)arg1;
- (void)commitOnWorkingQueue;
- (void)commit;
@property(readonly, nonatomic) id <IGSignalsObjectType> targetSignal;
- (id)createAndRegisterValueSignal:(id)arg1;
- (id)createAndRegisterSignal:(id)arg1 stackable:(_Bool)arg2;
- (id)createAndRegisterConditionalSignal:(id)arg1 stackable:(_Bool)arg2;
- (void)prepareForReuseWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 queueScheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
