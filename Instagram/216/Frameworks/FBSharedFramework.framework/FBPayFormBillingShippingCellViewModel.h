//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayFormBillingShippingCellViewModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showIfSet;
    NSString *_checkboxTitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showIfSet; // @synthesize showIfSet=_showIfSet;
@property(readonly, copy, nonatomic) NSString *checkboxTitle; // @synthesize checkboxTitle=_checkboxTitle;
- (id)initWithCheckboxTitle:(id)arg1 showIfSet:(_Bool)arg2;

@end
