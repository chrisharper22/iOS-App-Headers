//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class NSString, UIColor;

@interface IGSearchNoResultItemViewModel : NSObject <IGListDiffable>
{
    _Bool _useLargeText;
    _Bool _removeDivider;
    NSString *_message;
    UIColor *_textColor;
}

+ (id)viewModelWithMessage:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool removeDivider; // @synthesize removeDivider=_removeDivider;
@property(readonly, nonatomic) _Bool useLargeText; // @synthesize useLargeText=_useLargeText;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithMessage:(id)arg1 textColor:(id)arg2 useLargeText:(_Bool)arg3 removeDivider:(_Bool)arg4;

@end

