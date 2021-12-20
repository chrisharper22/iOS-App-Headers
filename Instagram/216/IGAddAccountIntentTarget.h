//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGMainAppSurfaceIntent, IGRegistrationIntentCollectionContext, NSString;

@interface IGAddAccountIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _startRegistrationFlow;
    unsigned long long _entryPoint;
    IGRegistrationIntentCollectionContext *_registrationIntentCollectionContext;
    IGMainAppSurfaceIntent *_cancelSwitchDestinationAppSurface;
    IGMainAppSurfaceIntent *_postLoginDestinationAppSurface;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGMainAppSurfaceIntent *postLoginDestinationAppSurface; // @synthesize postLoginDestinationAppSurface=_postLoginDestinationAppSurface;
@property(readonly, nonatomic) IGMainAppSurfaceIntent *cancelSwitchDestinationAppSurface; // @synthesize cancelSwitchDestinationAppSurface=_cancelSwitchDestinationAppSurface;
@property(readonly, nonatomic) IGRegistrationIntentCollectionContext *registrationIntentCollectionContext; // @synthesize registrationIntentCollectionContext=_registrationIntentCollectionContext;
@property(readonly, nonatomic) _Bool startRegistrationFlow; // @synthesize startRegistrationFlow=_startRegistrationFlow;
@property(readonly, nonatomic) unsigned long long entryPoint; // @synthesize entryPoint=_entryPoint;
- (id)initWithEntryPoint:(unsigned long long)arg1 startRegistrationFlow:(_Bool)arg2 registrationIntentCollectionContext:(id)arg3 cancelSwitchDestinationAppSurface:(id)arg4 postLoginDestinationAppSurface:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
