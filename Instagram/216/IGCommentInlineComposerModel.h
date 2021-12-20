//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGCommentModel, IGUser, NSString;

@interface IGCommentInlineComposerModel : NSObject <IGListDiffable>
{
    _Bool _addTopPadding;
    IGUser *_user;
    IGCommentModel *_replyToComment;
    NSString *_module;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool addTopPadding; // @synthesize addTopPadding=_addTopPadding;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) IGCommentModel *replyToComment; // @synthesize replyToComment=_replyToComment;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUser:(id)arg1 replyToComment:(id)arg2 module:(id)arg3 addTopPadding:(_Bool)arg4;

@end

