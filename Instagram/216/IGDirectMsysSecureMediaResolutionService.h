//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMsysMediaCacheResolving-Protocol.h"

@class IGDirectMsysMessagingMailbox, NSMutableDictionary, NSString;
@protocol IGDirectMsysSecureMediaResolutionServiceAnnouncer;

@interface IGDirectMsysSecureMediaResolutionService : NSObject <IGDirectMsysMediaCacheResolving>
{
    IGDirectMsysMessagingMailbox *_mailboxProvider;
    NSMutableDictionary *_resolvedImagesByContentTokens;
    NSMutableDictionary *_resolvedURLsByContentTokens;
    NSMutableDictionary *_activeResolvers;
    id <IGDirectMsysSecureMediaResolutionServiceAnnouncer> _announcer;
}

- (void).cxx_destruct;
- (void)_processResult:(_Bool)arg1 attachmentPk:(long long)arg2 contentToken:(id)arg3 shouldReturnImage:(_Bool)arg4 mediaCacheDataObject:(id)arg5 url:(id)arg6 error:(id)arg7;
- (void)resolveURLForContentToken:(id)arg1 attachmentPk:(long long)arg2;
- (void)resolveImageForContentToken:(id)arg1 attachmentPk:(long long)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)resolvedURLsByContentToken;
- (id)resolvedImagesByContentToken;
- (id)initWithMailboxProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

