//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGGraphQLCachePolicy-Protocol.h>

@class IGBusinessConversionFacebookPageContactInfoUpdateParser, IGBusinessConversionSelectionGraphQLHelper, IGUserSession, NSString;
@protocol IGFBIdentityProvisioning;

@interface IGBusinessConversionFacebookPageDataSource : NSObject <IGGraphQLCachePolicy>
{
    IGUserSession *_userSession;
    IGBusinessConversionFacebookPageContactInfoUpdateParser *_contactInfoUpdateParser;
    IGBusinessConversionSelectionGraphQLHelper *_pageParser;
    id <IGFBIdentityProvisioning> _fbIdProvisioning;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGFBIdentityProvisioning> fbIdProvisioning; // @synthesize fbIdProvisioning=_fbIdProvisioning;
@property(readonly, nonatomic) IGBusinessConversionSelectionGraphQLHelper *pageParser; // @synthesize pageParser=_pageParser;
@property(readonly, nonatomic) IGBusinessConversionFacebookPageContactInfoUpdateParser *contactInfoUpdateParser; // @synthesize contactInfoUpdateParser=_contactInfoUpdateParser;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (_Bool)isCacheValidForRequest:(id)arg1 cachedObject:(id)arg2;
- (void)fetchFacebookPages:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)fetchFacebookPageById:(id)arg1 withSuccessHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

