//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGSearchResultsViewController.h"

#import "IGTabControlSegment-Protocol.h"

@class IGUserSession, NSString;
@protocol IGSearchTabContextProvider;

@interface IGSearchResultsTabViewController : IGSearchResultsViewController <IGTabControlSegment>
{
    id <IGSearchTabContextProvider> _tabContextProvider;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)fallbackIcon;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 typeaheadDataProvider:(id)arg2 nullStateDataProvider:(id)arg3 delegate:(id)arg4 loggingDelegate:(id)arg5 tabContextProvider:(id)arg6 quickPerformanceLoggingDelegate:(id)arg7 searchClickHandler:(id)arg8 analyticsModule:(id)arg9 title:(id)arg10 searchTypeString:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
