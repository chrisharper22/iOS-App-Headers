//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "IGDirectReshareMessageFooterViewModel-Protocol.h"
#import "IGDirectReshareMessageHeaderViewModel-Protocol.h"
#import "IGDirectReshareMessageMediaViewModel-Protocol.h"
#import "IGListDiffable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGDirectHscrollXMAMessageSingleItemViewModel : IGValueObject <IGDirectReshareMessageFooterViewModel, IGDirectReshareMessageHeaderViewModel, IGListDiffable, IGDirectReshareMessageMediaViewModel, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)headerTitleText;
- (id)diffIdentifier;
- (id)accessibilityText;
- (struct _NSRange)headlineBoldTextRange;
- (id)bottomText;
- (long long)bottomTextMaxLineNumber;
- (long long)headlineTextMaxLineNumber;
- (id)headlineText;
- (id)module;
- (unsigned long long)headerImageBadgeImageAsset;
- (id)usersInHeaderFacepile;
- (id)headerImageSpecifier;
- (id)reshareSubtitle;
- (id)reshareTitle;
- (long long)layoutType;
- (_Bool)isChevronHidden;
- (_Bool)senderIsCurrentUser;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

