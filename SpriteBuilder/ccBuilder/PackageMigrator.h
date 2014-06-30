#import <Foundation/Foundation.h>

@class ProjectSettings;


@interface PackageMigrator : NSObject

// Designated initializer
- (instancetype)initWithProjectSettings:(ProjectSettings *)projectSettings;

- (BOOL)migrate:(NSError **)error;

- (void)rollback;

@end