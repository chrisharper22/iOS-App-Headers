//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGResultsFilterListSectionController, IGResultsFilterListViewModel;

@protocol IGResultsFilterListSectionDelegate <NSObject>
- (void)resultsFilterListSectionController:(IGResultsFilterListSectionController *)arg1 didDeselectViewModel:(IGResultsFilterListViewModel *)arg2;
- (void)resultsFilterListSectionController:(IGResultsFilterListSectionController *)arg1 didSelectViewModel:(IGResultsFilterListViewModel *)arg2;
@end

