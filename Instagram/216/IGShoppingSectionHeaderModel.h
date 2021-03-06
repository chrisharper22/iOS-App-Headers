//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGShoppingSectionHeaderButtonModel, IGShoppingTextDataModel, NSString;

@interface IGShoppingSectionHeaderModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showTopSeparator;
    NSString *_title;
    IGShoppingTextDataModel *_subtitle;
    IGShoppingSectionHeaderButtonModel *_button;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(readonly, copy, nonatomic) IGShoppingSectionHeaderButtonModel *button; // @synthesize button=_button;
@property(readonly, copy, nonatomic) IGShoppingTextDataModel *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 button:(id)arg3 showTopSeparator:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;

@end

