//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTVAdsSectionController, IGUser, NSDictionary, NSString;

@protocol IGTVAdsSectionControllerDelegate <NSObject>
- (void)adsSectionControllerDidTapSkipLabel:(IGTVAdsSectionController *)arg1;
- (_Bool)adsSectionControllerCanResumePlayback:(IGTVAdsSectionController *)arg1;
- (void)adsSectionControllerDidTapOverflow:(IGTVAdsSectionController *)arg1;
- (void)adsSectionController:(IGTVAdsSectionController *)arg1 didTapUser:(IGUser *)arg2 adSkipType:(NSString *)arg3 extras:(NSDictionary *)arg4;
- (void)adsSectionControllerDidPlayToEnd:(IGTVAdsSectionController *)arg1;
- (void)adsSectionControllerDidTapClose:(IGTVAdsSectionController *)arg1 extras:(NSDictionary *)arg2;
@end

