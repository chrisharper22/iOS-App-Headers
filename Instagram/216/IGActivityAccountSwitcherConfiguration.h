//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSString;

@interface IGActivityAccountSwitcherConfiguration : NSObject <IGListDiffable>
{
    NSString *_userPk;
    _Bool _hideTopSeparator;
    _Bool _shouldAnimate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(nonatomic) _Bool hideTopSeparator; // @synthesize hideTopSeparator=_hideTopSeparator;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUserPk:(id)arg1 hideTopSeparator:(_Bool)arg2 shouldAnimate:(_Bool)arg3;

@end

