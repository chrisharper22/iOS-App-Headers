//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;
@protocol IGMultipleAccountsUpsellDataSourceDelegate;

@interface IGMultipleAccountsUpsellDataSource : NSObject
{
    IGUserSession *_userSession;
    id <IGMultipleAccountsUpsellDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMultipleAccountsUpsellDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_requestForUserPK:(id)arg1 path:(id)arg2;
- (void)fetchAllInterestFollowingAccountsForUserPK:(id)arg1;
- (void)fetchMostInteractedWithFollowingAccountsForUserPK:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

