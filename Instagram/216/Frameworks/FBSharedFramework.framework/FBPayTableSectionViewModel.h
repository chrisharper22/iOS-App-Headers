//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPayTableHeaderViewConfiguration, NSArray, NSString;

@interface FBPayTableSectionViewModel : NSObject
{
    _Bool _hasHeader;
    NSString *_headerReuseIdentifier;
    FBPayTableHeaderViewConfiguration *_headerConfiguration;
    NSString *_footerReuseIdentifier;
    long long _footerType;
    NSArray *_cellViewModels;
    CDUnknownBlockType _headerCTAAction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType headerCTAAction; // @synthesize headerCTAAction=_headerCTAAction;
@property(retain, nonatomic) NSArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
@property(readonly, nonatomic) long long footerType; // @synthesize footerType=_footerType;
@property(readonly, nonatomic) NSString *footerReuseIdentifier; // @synthesize footerReuseIdentifier=_footerReuseIdentifier;
@property(readonly, nonatomic) FBPayTableHeaderViewConfiguration *headerConfiguration; // @synthesize headerConfiguration=_headerConfiguration;
@property(readonly, nonatomic) NSString *headerReuseIdentifier; // @synthesize headerReuseIdentifier=_headerReuseIdentifier;
@property(readonly, nonatomic) _Bool hasHeader; // @synthesize hasHeader=_hasHeader;
- (id)initWithCellViewModels:(id)arg1 headerReuseIdentifier:(id)arg2 headerConfiguration:(id)arg3 headerCTAAction:(CDUnknownBlockType)arg4 footerReuseIdentifier:(id)arg5 footerType:(long long)arg6;

@end
