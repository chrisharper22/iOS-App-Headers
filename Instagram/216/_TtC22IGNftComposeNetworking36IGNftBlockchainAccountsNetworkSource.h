//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;
@protocol _TtP22IGNftComposeNetworking44IGNftBlockchainAccountsNetworkSourceDelegate_;

@interface _TtC22IGNftComposeNetworking36IGNftBlockchainAccountsNetworkSource : NSObject
{
    MISSING_TYPE *blockchainAccounts;
    MISSING_TYPE *delegate;
    MISSING_TYPE *loading;
    MISSING_TYPE *failed;
    MISSING_TYPE *loadedOnce;
    MISSING_TYPE *path;
    MISSING_TYPE *userSession;
}

+ (id)allBlockchainAccountsForUserSession:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)reload;
- (void)fetchIfNeeded;
@property(nonatomic) _Bool loading; // @synthesize loading;
@property(nonatomic) __weak id <_TtP22IGNftComposeNetworking44IGNftBlockchainAccountsNetworkSourceDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSArray *blockchainAccounts;

@end

