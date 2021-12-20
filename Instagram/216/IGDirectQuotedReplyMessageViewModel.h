//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGIntentTransitionFocusItem-Protocol.h"
#import "IGListDiffable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGDirectQuotedReplyMessageViewModel : IGValueObject <IGIntentTransitionFocusItem, IGListDiffable, IGDirectMessageViewModelProtocol, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithText:(id)arg1 messageCellViewModel:(id)arg2 sender:(id)arg3 recipient:(id)arg4 currentUserPk:(id)arg5 userStore:(id)arg6 displayNameType:(long long)arg7 nicknameManager:(id)arg8 shouldTruncateQuotedText:(_Bool)arg9 contentStringStylesProvider:(id)arg10 currentPreloadContextIdentifier:(id)arg11 featureSetProvider:(id)arg12 shouldBlurMedia:(_Bool)arg13 shouldProtectVisualMessage:(_Bool)arg14;
- (long long)intentTransitionFocusIntegerIdentifier;
- (id)intentTransitionFocusIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
