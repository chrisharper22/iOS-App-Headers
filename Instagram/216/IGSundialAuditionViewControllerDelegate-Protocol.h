//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSundialAuditionViewController, IGSundialComposition;

@protocol IGSundialAuditionViewControllerDelegate <NSObject>
- (void)sundialAuditionViewController:(IGSundialAuditionViewController *)arg1 didTapNextButtonWithComposition:(IGSundialComposition *)arg2;
- (void)sundialAuditionViewController:(IGSundialAuditionViewController *)arg1 didTapEditClipsButtonWithComposition:(IGSundialComposition *)arg2;
- (void)sundialAuditionViewController:(IGSundialAuditionViewController *)arg1 didTapSkipButtonWithComposition:(IGSundialComposition *)arg2;
- (void)sundialAuditionViewController:(IGSundialAuditionViewController *)arg1 didTapBackButtonWithComposition:(IGSundialComposition *)arg2;
@end

