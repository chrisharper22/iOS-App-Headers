//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGIABAutofillBottomSheetFooterSectionViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _shouldShowTopSeparator;
    NSString *_primaryButtonText;
    NSString *_secondaryButtonText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowTopSeparator; // @synthesize shouldShowTopSeparator=_shouldShowTopSeparator;
@property(readonly, copy, nonatomic) NSString *secondaryButtonText; // @synthesize secondaryButtonText=_secondaryButtonText;
@property(readonly, copy, nonatomic) NSString *primaryButtonText; // @synthesize primaryButtonText=_primaryButtonText;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPrimaryButtonText:(id)arg1 secondaryButtonText:(id)arg2 shouldShowTopSeparator:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end
