//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveQuestionModel, NSString;

@protocol IGLiveUpvoteableQuestionSetSectionControllerDelegate <NSObject>
- (void)liveUpvoteableQuestionControllerDidReportQuestion:(NSString *)arg1;
- (void)liveUpvoteableQuestionControllerDidDeleteQuestion:(NSString *)arg1 withQuestionText:(NSString *)arg2 questionSource:(long long)arg3;
- (void)liveUpvoteableQuestionControllerDidSetQuestionPk:(NSString *)arg1 questionText:(NSString *)arg2 questionSource:(long long)arg3 atIndex:(long long)arg4 asLiked:(_Bool)arg5;
- (void)liveUpvoteableQuestionControllerDidSelectQuestion:(IGLiveQuestionModel *)arg1 atIndex:(long long)arg2;
@end

