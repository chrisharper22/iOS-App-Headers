//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGGraphQLCachePolicy-Protocol.h>

@class IGProConnectFBPageNameCheckParser, IGUserSession, NSString;

@interface IGProConnectFBPageNameValidationNetworker : NSObject <IGGraphQLCachePolicy>
{
    IGUserSession *_userSession;
    IGProConnectFBPageNameCheckParser *_nameCheckParser;
}

- (void).cxx_destruct;
- (_Bool)isCacheValidForRequest:(id)arg1 cachedObject:(id)arg2;
- (void)validatePageName:(id)arg1 withSuccessHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

