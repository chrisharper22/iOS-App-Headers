//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDiscoveryGridLoggingProvider-Protocol.h"

@class IGDiscoveryEntityPageLoggingConfig, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGDiscoveryParentUnitLoggingProvider, IGGridItemPositionProvider;

@interface IGKeywordSearchGridLoggingProvider : NSObject <IGDiscoveryGridLoggingProvider>
{
    id <IGGridItemPositionProvider> _gridPositionProvider;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGDiscoveryParentUnitLoggingProvider> _parentUnitLoggingProvider;
    IGDiscoveryEntityPageLoggingConfig *_entityPageConfig;
    NSString *_searchSessionId;
    NSString *_keywordSessionId;
    NSString *_rankToken;
    NSString *_module;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
- (void)_logRefinementClickWithStyle:(id)arg1 loggingExtras:(id)arg2;
- (void)_logRefinementImpressionWithStyle:(id)arg1 loggingExtras:(id)arg2;
- (void)logItemSelection:(id)arg1 loggingExtras:(id)arg2 atIndexPath:(id)arg3;
- (void)logImpressionForItem:(id)arg1 loggingExtras:(id)arg2 atIndexPath:(id)arg3;
@property(readonly, nonatomic) NSString *uniquenessIdentifier;
- (void)configureWithRankToken:(id)arg1;
- (id)initWithAnalyticsModule:(id)arg1 gridPositionProvider:(id)arg2 analyticsLogger:(id)arg3 parentUnitLoggingProvider:(id)arg4 entityPageLoggingConfig:(id)arg5 searchSessionId:(id)arg6 keywordSessionId:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

