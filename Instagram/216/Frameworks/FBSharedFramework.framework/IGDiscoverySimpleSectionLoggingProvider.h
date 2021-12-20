//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDiscoverySectionLoggingProvider-Protocol.h>

@class IGSessionTracker, NSDictionary, NSString;

@interface IGDiscoverySimpleSectionLoggingProvider : NSObject <IGDiscoverySectionLoggingProvider>
{
    IGSessionTracker *_sessionTracker;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) NSString *thumbnailSectionName;
@property(readonly, nonatomic) NSString *impressionEventName;
@property(readonly, nonatomic) NSDictionary *extras;
- (id)extraLoggingDictionaryForMedia:(id)arg1;
@property(readonly, nonatomic) NSString *sessionId;
- (id)initWithSessionTracker:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
