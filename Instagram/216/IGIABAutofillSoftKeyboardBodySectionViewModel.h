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

@interface IGIABAutofillSoftKeyboardBodySectionViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

