//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSessionChainProvider-Protocol.h>

@class IGMainAppViewControllerProvider, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGSessionChainingManager : NSObject <IGSessionChainProvider>
{
    NSMutableArray *_sessionChainItems;
    NSString *_sessionChain;
    NSString *_currentTabEndpoint;
    NSMutableSet *_tabEndpoints;
    _Bool _willSwitchTabInNextUpdate;
    NSMutableArray *_previousSessionChainItemsContainingTabEndpoint;
    NSMapTable *_vcToSeq;
    long long _seq;
    NSObject *_lock;
    id <IGAnalyticsEventLoggingProtocol> _logger;
    IGMainAppViewControllerProvider *_mainAppViewControllerProvider;
    _Bool _shouldUseModuleV2;
    long long _maxItemsKeptFromBottom;
    long long _maxItemsKeptFromTop;
}

- (void).cxx_destruct;
- (void)setLogger:(id)arg1;
- (void)setMainAppViewControllerProvider:(id)arg1;
@property(readonly, nonatomic) NSString *sessionChain;
- (void)updateCurrentChainWithAppearedViewController:(id)arg1 withClickPoint:(id)arg2;
- (void)updateCurrentChain;
- (void)willSwitchTabInNextUpdate;
- (id)init;

@end

