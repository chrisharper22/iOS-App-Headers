//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IGLiveUpvoteableQuestionCellDelegate <NSObject>
- (void)upvoteableQuestionCellDidReportQuestion:(NSString *)arg1;
- (void)upvoteableQuestionCellDidDeleteQuestion:(NSString *)arg1 withQuestionText:(NSString *)arg2 questionSource:(long long)arg3;
- (void)upvoteableQuestionCellDidSetQuestionPk:(NSString *)arg1 questionText:(NSString *)arg2 questionSource:(long long)arg3 atIndex:(long long)arg4 asLiked:(_Bool)arg5;
@end
