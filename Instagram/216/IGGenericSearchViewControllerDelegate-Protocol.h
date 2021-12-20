//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGGenericSearchViewController, NSString;

@protocol IGGenericSearchViewControllerDelegate <NSObject>
- (void)searchViewController:(IGGenericSearchViewController *)arg1 didChangeSearchText:(NSString *)arg2 searchSessionId:(NSString *)arg3;
- (_Bool)searchViewControllerShouldTriggerSearchWithReturnKeyClick:(IGGenericSearchViewController *)arg1;
- (void)searchViewControllerDidExitSearch:(IGGenericSearchViewController *)arg1;
- (void)searchViewControllerDidCancelSearch:(IGGenericSearchViewController *)arg1;
@end
