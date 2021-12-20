//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGLeadGenFooterViewModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_primaryButtonTitle;
    NSString *_secondaryButtonTitle;
    unsigned long long _layoutOption;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long layoutOption; // @synthesize layoutOption=_layoutOption;
@property(readonly, copy, nonatomic) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property(readonly, copy, nonatomic) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPrimaryButtonTitle:(id)arg1 secondaryButtonTitle:(id)arg2 layoutOption:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;

@end
