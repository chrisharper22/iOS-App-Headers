//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGLiveCommentViewContaining, IGLiveLoggingContext;

@interface IGLiveCommentViewUpdater : NSObject
{
    id <IGLiveCommentViewContaining> _commentViewContainer;
    id <IGLiveLoggingContext> _loggingContext;
}

- (void).cxx_destruct;
- (void)_notifyDisplayComment:(id)arg1 shouldLogImpression:(_Bool)arg2;
- (id)visibleCellForComment:(id)arg1;
- (_Bool)isCommentVisible:(id)arg1;
- (void)removeCommentWithPk:(id)arg1;
- (void)updateCommentWithPk:(id)arg1 withComment:(id)arg2 shouldLogImpression:(_Bool)arg3;
- (void)addComments:(id)arg1 shouldLogImpression:(_Bool)arg2;
- (id)initWithCommentViewContainer:(id)arg1 loggingContext:(id)arg2;

@end

