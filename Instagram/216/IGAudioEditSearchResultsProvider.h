//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGEditSearchResultsProvider-Protocol.h"

@class IGUserSession, NSString;

@interface IGAudioEditSearchResultsProvider : NSObject <IGEditSearchResultsProvider>
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (unsigned long long)searchType;
- (id)recentItems;
- (id)noResultsText;
- (_Bool)isReadyForImpressionLogging;
- (unsigned long long)entryPoint;
- (void)clearSearchHistory;
- (id)clearAllTitleText;
- (id)analyticsModule;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

