//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGProConversionCategoriesDataSource, NSArray;
@protocol IGProConversionCategoriesPreloaderDelegate;

@interface IGProConversionCategoriesPreloader : NSObject
{
    IGProConversionCategoriesDataSource *_dataSource;
    NSArray *_categories;
    id <IGProConversionCategoriesPreloaderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProConversionCategoriesPreloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void)_handleCategoriesResult:(_Bool)arg1 categories:(id)arg2 error:(id)arg3;
- (void)preloadCreatorCategoriesBySuperCategoryId:(id)arg1;
- (void)preloadBusinessCategoriesByPageName:(id)arg1;
- (void)preloadMergedProCategories;
- (id)initWithActorAccount:(id)arg1 concurrentUserSessionHandler:(id)arg2;

@end
