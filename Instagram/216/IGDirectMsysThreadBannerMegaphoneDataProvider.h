//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadMegaphoneDataProvider-Protocol.h"

@class IGDirectMsysMessagingMailbox, NSNumber, NSString;
@protocol IGDirectThreadMegaphoneDataProviderDelegate;

@interface IGDirectMsysThreadBannerMegaphoneDataProvider : NSObject <IGDirectThreadMegaphoneDataProvider>
{
    IGDirectMsysMessagingMailbox *_mailboxProvider;
    NSNumber *_threadKey;
    id <IGDirectThreadMegaphoneDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)prepareThreadMegaphoneData;
- (void)stopListeningForThreadMegaphoneData;
- (void)startListeningForThreadMegaphoneDataWithDelegate:(id)arg1;
- (void)_fetchThreadBannersFromDatabaseWithMailbox:(id)arg1;
- (id)initWithMailboxProvider:(id)arg1 threadKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

