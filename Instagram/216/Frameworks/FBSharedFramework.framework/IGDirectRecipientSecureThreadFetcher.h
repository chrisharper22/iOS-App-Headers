//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;

@interface IGDirectRecipientSecureThreadFetcher : NSObject
{
    IGUserSession *_userSession;
    _Bool _shouldFilterUnmessageableSecureThreads;
}

- (void).cxx_destruct;
- (void)fetchDefaultRecipientsWithSuccess:(CDUnknownBlockType)arg1;
- (void)fetchRecipientsForString:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1 shouldFilterUnmessageableSecureThreads:(_Bool)arg2;

@end

