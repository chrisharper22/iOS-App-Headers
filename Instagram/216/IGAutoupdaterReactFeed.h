//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAutoupdaterFeed-Protocol.h"

@class FBAutoupdaterHost, IGFacebookHelper, NSString;
@protocol FBAutoupdaterFeedDelegate, IGAPIClient, IGRequestToken;

@interface IGAutoupdaterReactFeed : NSObject <FBAutoupdaterFeed>
{
    FBAutoupdaterHost *_host;
    NSString *_userPK;
    id <IGAPIClient> _networker;
    id <IGRequestToken> _token;
    IGFacebookHelper *_facebookHelper;
    id <FBAutoupdaterFeedDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_apiRequestDidFailWithError:(id)arg1;
- (void)_apiRequestDidSucceedWithResponseObject:(id)arg1;
- (void)cancel;
- (void)fetchUpdateWithConnection:(id)arg1;
- (void)fetchUpdateWithOtaVersion:(id)arg1;
- (void)fetchUpdate;
- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithHost:(id)arg1 userPK:(id)arg2 networker:(id)arg3 facebookHelper:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

