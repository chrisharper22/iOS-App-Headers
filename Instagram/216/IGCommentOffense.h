//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGCommentModel;

@interface IGCommentOffense : NSObject <IGListDiffable>
{
    _Bool _isPaused;
    IGCommentModel *_offensiveComment;
    double _currentProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(readonly, nonatomic) IGCommentModel *offensiveComment; // @synthesize offensiveComment=_offensiveComment;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithOffensiveComment:(id)arg1;

@end

