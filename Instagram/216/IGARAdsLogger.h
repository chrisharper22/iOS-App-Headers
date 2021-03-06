//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGALLogContextModelProvider-Protocol.h"
#import "IGALLoggerContextProvider-Protocol.h"

@class NSString;
@protocol IGARAdsSessionProvider;

@interface IGARAdsLogger : NSObject <IGALLogContextModelProvider, IGALLoggerContextProvider>
{
    NSString *_mediaId;
    id <IGARAdsSessionProvider> _sessionProvider;
}

- (void).cxx_destruct;
- (id)trackingModel;
- (id)analyticsModule;
- (id)userSession;
- (void)logTrackingInfoForView:(id)arg1;
- (void)setupLoggingContextProviderForView:(id)arg1 sessionProvider:(id)arg2;
- (id)initWithMediaId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

